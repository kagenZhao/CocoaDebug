//
//  Example
//  man.li
//
//  Created by man.li on 11/11/2018.
//  Copyright © 2020 man.li. All rights reserved.
//

import UIKit

class LogCell: UITableViewCell {
    
    @IBOutlet weak var labelContent: CustomTextView!
    @IBOutlet weak var viewTypeLogColor: UIView!
    
    var model: _OCLogModel? {
        didSet {
            guard let model = model else { return }
            
            labelContent.text = nil
            labelContent.text = model.str
            labelContent.attributedText = model.attr
            
            labelContent.textContainer.lineBreakMode = NSLineBreakMode.byCharWrapping
            labelContent.textContainer.lineFragmentPadding = 0
            labelContent.textContainerInset = .zero
            labelContent.isUserInteractionEnabled = false
            
            //tag
            if model.isTag == true {
                self.contentView.backgroundColor = "#007aff".hexColor
            } else {
                //isSelected
                if model.isSelected == true {
                    self.contentView.backgroundColor = "#222222".hexColor
                } else {
                    self.contentView.backgroundColor = .black
                }
            }
        }
    }
}


class CustomTextView : UITextView, UITextViewDelegate {
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.inputView = UIView()
        self.inputAccessoryView = UIView()
        self.delegate = self
        self.isSelectable = true
    }
    
    override var canBecomeFirstResponder: Bool {
        return true
    }
    
    @available(iOS 2.0, *)
    func textView(_ textView: UITextView, shouldChangeTextIn range: NSRange, replacementText text: String) -> Bool {
        return false
    }
    
    override func canPerformAction(_ action: Selector, withSender sender: Any?) -> Bool {
        switch action {
        case #selector(select(_:)),
             #selector(copy(_:)),
             #selector(selectAll(_:)):
            return super.canPerformAction(action, withSender: sender)
        default:
            return false
        }
    }
}
