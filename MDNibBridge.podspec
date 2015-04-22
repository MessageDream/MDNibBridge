Pod::Spec.new do |s|
  s.name         = "MDNibBridge"
  s.version      = "0.0.1"
  s.summary      = "forked from XXNibBridge -- Bridge a nib file to another nib or storyboard"

  s.description  = <<-DESC
                   A longer description of MDNibBridge in Markdown format.

                   * Think: Why did you write this? What is the focus? What does it do?
                   * CocoaPods will be using this to generate tags, and improve search results.
                   * Try to keep it short, snappy and to the point.
                   * Finally, don't worry about the indent, CocoaPods strips it!
                   DESC

  s.homepage     = "https://github.com/MessageDream/MDNibBridge"
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"

  s.license      = "MIT (example)"
  # s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author             = { "Jayden Zhao" => "jaydenzhao@outlook.com" }
  # Or just: s.author    = "Jayden Zhao"
  # s.authors            = { "Jayden Zhao" => "jaydenzhao@outlook.com" }
  # s.social_media_url   = "http://twitter.com/Jayden Zhao"

  # s.platform     = :ios
  s.platform     = :ios, "6.0"

  #  When using multiple platforms
  # s.ios.deployment_target = "6.0"
  # s.osx.deployment_target = "10.9"

  s.source       = { :git => "https://github.com/MessageDream/MDNibBridge.git", :tag => "0.0.1" }
  s.source_files  = "Classes", "MDNibBridge/*.{h,m}"
  s.requires_arc = true

end
