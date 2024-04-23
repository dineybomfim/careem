Pod::Spec.new do |spec|
  spec.name                   = 'OneClickCheckout'
  spec.version                = '1.4.0'
  spec.summary                = 'Careem OneClickCheckout framework for payment'
  spec.homepage               = 'https://careem.com'
  spec.author                 = { 'Careem' => 'careemdev@careem.com' }
  spec.source            = { :http => 'https://careempublic.jfrog.io/artifactory/careem-cocopod-local/OneClickCheckout-iOS' }

  spec.vendored_frameworks = "OneClickCheckout.xcframework"

  spec.platform = :ios

  spec.ios.deployment_target  = '13.0'

  spec.dependency   'Analytika'

end