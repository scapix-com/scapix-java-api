// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE_FWD
#define SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::junit::framework { class Protectable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::junit::framework::Protectable>
{
	static constexpr fixed_string class_name = "junit/framework/Protectable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE)
#define SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class junit::framework::Protectable : public jni::object_base<"junit/framework/Protectable",
	java::lang::Object>
{
public:

	void protect() { return call_method<"protect", void>(); }

protected:

	Protectable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JUNIT_FRAMEWORK_PROTECTABLE
