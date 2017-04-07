Pod::Spec.new do |s|
  s.name             = "JSImagePickerController"
  s.version          = "0.1.3"
  s.summary          = "A photo picker controller that resembles the style of the image picker in iOS 8's messages app."
  s.description      = <<-DESC
                       A photo picker controller that resembles the style of the image picker in iOS 8's messages app.
                       DESC
  s.homepage         = "https://github.com/HeshamMegid/JSImagePickerController"
  s.license          = 'MIT'
  s.author           = { "Hesham Abd-Elmegid" => "hesham.abdelmegid@gmail.com" }
  s.source           = { :git => "https://github.com/HeshamMegid/JSImagePickerController.git", :tag => s.version.to_s }

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'JSImagePickerController Source/*'
end