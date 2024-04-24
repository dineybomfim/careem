Pod::Spec.new do |s|
  s.name         = 'Analytika'
  s.version      = '0.70.0'
  s.summary      = 'Analytika SDK'
  s.description  = 'A longer description of the pod'
  s.homepage     = 'https://github.com/dineybomfim/careem.git'
  s.authors      = { 'Team Cerberus - Careem' => 'captain-cerberus@careem.com' }
  s.license      = { :type => 'BSD-3-Clause', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/dineybomfim/careem.git', :tag => "#{s.name}-v#{s.version}" }
  s.user_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.pod_target_xcconfig = { 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.swift_version = '5.0'
  s.ios.deployment_target  = '13.0'
  s.requires_arc = true
  s.ios.vendored_frameworks = 'Analytika.xcframework'
end
