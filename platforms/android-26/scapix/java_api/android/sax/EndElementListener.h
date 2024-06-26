// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::sax { class EndElementListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::sax::EndElementListener>
{
	static constexpr fixed_string class_name = "android/sax/EndElementListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER)
#define SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::sax::EndElementListener : public jni::object_base<"android/sax/EndElementListener",
	java::lang::Object>
{
public:

	void end() { return call_method<"end", void>(); }

protected:

	EndElementListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SAX_ENDELEMENTLISTENER
