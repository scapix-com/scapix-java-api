// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote { class JMXAddressable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::JMXAddressable>
{
	static constexpr fixed_string class_name = "javax/management/remote/JMXAddressable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/remote/JMXServiceURL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::JMXAddressable : public jni::object_base<"javax/management/remote/JMXAddressable",
	java::lang::Object>
{
public:

	jni::ref<javax::management::remote::JMXServiceURL> getAddress() { return call_method<"getAddress", jni::ref<javax::management::remote::JMXServiceURL>>(); }

protected:

	JMXAddressable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXADDRESSABLE
