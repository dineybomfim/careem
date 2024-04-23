Pod::s.new do |s|
  s.name         = 'Analytika'
  s.version      = '0.69.0'
  s.summary      = 'Analytika SDK'
  s.homepage     = 'https://github.com/careem/analytika'
  s.authors      = { 'Team Cerberus - Careem' => 'captain-cerberus@careem.com' }
  s.license      = { :type => 'BSD-3-Clause', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/dineybomfim/careem.git', :tag => "#{s.name}-v#{s.version}", :submodules => true }
  s.platform     = :ios
  s.ios.deployment_target  = '13.0'
  s.ios.vendored_frameworks = 'Analytika.xcframework'
end
