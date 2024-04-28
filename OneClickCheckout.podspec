Pod::Spec.new do |s|
  s.name         = 'OneClickCheckout'
  s.version      = '1.4.2'
  s.summary      = 'OneClickCheckout framework for payment'
  s.description  = 'OneClickCheckout framework for payment'
  s.homepage     = 'https://github.com/dineybomfim/careem.git'
  s.authors      = { 'OneClickCheckout' => 'oneclickcheckout@oneclickcheckout.com' }
  s.license      = { :type => 'BSD-3-Clause', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/dineybomfim/careem.git', :tag => "#{s.name}-v#{s.version}" }
  s.user_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.pod_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.swift_version = '5.0'
  s.ios.deployment_target  = '13.0'
  s.requires_arc = true
  s.dependency 'Analytika'
  s.ios.vendored_frameworks = 'OneClickCheckout.xcframework'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
