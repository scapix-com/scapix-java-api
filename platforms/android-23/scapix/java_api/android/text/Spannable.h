// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/Spanned.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Spannable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Spannable>
{
	static constexpr fixed_string class_name = "android/text/Spannable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::Spanned>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE)
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Spannable_Factory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Spannable : public jni::object_base<"android/text/Spannable",
	java::lang::Object,
	android::text::Spanned>
{
public:

	using Factory = Spannable_Factory;

	void setSpan(jni::ref<java::lang::Object> p1, jint p2, jint p3, jint p4) { return call_method<"setSpan", void>(p1, p2, p3, p4); }
	void removeSpan(jni::ref<java::lang::Object> p1) { return call_method<"removeSpan", void>(p1); }

protected:

	Spannable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNABLE
