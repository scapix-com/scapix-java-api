// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback_CellInfoListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback_CellInfoListener>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback$CellInfoListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback_CellInfoListener : public jni::object_base<"android/telephony/TelephonyCallback$CellInfoListener",
	java::lang::Object>
{
public:

	void onCellInfoChanged(jni::ref<java::util::List> p1) { return call_method<"onCellInfoChanged", void>(p1); }

protected:

	TelephonyCallback_CellInfoListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CELLINFOLISTENER
