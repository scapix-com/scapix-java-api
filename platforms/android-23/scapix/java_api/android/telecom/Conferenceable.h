// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Conferenceable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Conferenceable>
{
	static constexpr fixed_string class_name = "android/telecom/Conferenceable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Conferenceable : public jni::object_base<"android/telecom/Conferenceable",
	java::lang::Object>
{
public:


protected:

	Conferenceable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONFERENCEABLE
