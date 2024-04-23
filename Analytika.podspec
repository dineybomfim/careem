Pod::Spec.new do |s|
  s.name         = 'Analytika'
  s.version      = '0.69.0'
  s.summary      = 'Analytika SDK'
  s.homepage     = 'https://github.com/dineybomfim/careem/tree/main/Analytika.xcframework'
  s.authors      = { 'Team Cerberus - Careem' => 'captain-cerberus@careem.com' }
  s.license      = { :type => 'BSD-3-Clause', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/dineybomfim/careem.git', :tag => "#{s.name}-v#{s.version}", :submodules => true }
  s.user_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.pod_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.source_files = 'Sources/**/*.{h,m,swift}'
  s.resources = 'Sources/**/*{lproj,xcdatamodeld,storyboard,xib,xcassets,json,strings}'
  s.platform     = :ios
  s.ios.deployment_target  = '13.0'
  s.ios.vendored_frameworks = 'Analytika.xcframework'
end
