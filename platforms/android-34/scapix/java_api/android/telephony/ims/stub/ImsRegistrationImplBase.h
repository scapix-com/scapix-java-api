// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims::stub { class ImsRegistrationImplBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::stub::ImsRegistrationImplBase>
{
	static constexpr fixed_string class_name = "android/telephony/ims/stub/ImsRegistrationImplBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::stub::ImsRegistrationImplBase : public jni::object_base<"android/telephony/ims/stub/ImsRegistrationImplBase",
	java::lang::Object>
{
public:

	static jint REGISTRATION_TECH_3G() { return get_static_field<"REGISTRATION_TECH_3G", jint>(); }
	static jint REGISTRATION_TECH_CROSS_SIM() { return get_static_field<"REGISTRATION_TECH_CROSS_SIM", jint>(); }
	static jint REGISTRATION_TECH_IWLAN() { return get_static_field<"REGISTRATION_TECH_IWLAN", jint>(); }
	static jint REGISTRATION_TECH_LTE() { return get_static_field<"REGISTRATION_TECH_LTE", jint>(); }
	static jint REGISTRATION_TECH_NONE() { return get_static_field<"REGISTRATION_TECH_NONE", jint>(); }
	static jint REGISTRATION_TECH_NR() { return get_static_field<"REGISTRATION_TECH_NR", jint>(); }


protected:

	ImsRegistrationImplBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_STUB_IMSREGISTRATIONIMPLBASE
