// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class MXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::MXBean>
{
	static constexpr fixed_string class_name = "javax/management/MXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::MXBean : public jni::object_base<"javax/management/MXBean",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jboolean value() { return call_method<"value", jboolean>(); }

protected:

	MXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MXBEAN
