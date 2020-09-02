//
//  PresentVC.swift
//  SmartDeviceLink-Example-Swift
//
//  Created by Joel Fischer on 9/2/20.
//  Copyright © 2020 smartdevicelink. All rights reserved.
//

import UIKit

class PresentVC: UIViewController {
    @IBAction func dismissButtonPressed(_ sender: UIBarButtonItem) {
        dismiss(animated: true)
    }

    override func viewDidLoad() {
        print("VIEW DID LOAD")
    }

    override func viewDidAppear(_ animated: Bool) {
        print("VIEW DID APPEAR")
    }
}

