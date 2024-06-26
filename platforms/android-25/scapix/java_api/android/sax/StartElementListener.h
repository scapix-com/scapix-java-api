// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::sax { class StartElementListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::sax::StartElementListener>
{
	static constexpr fixed_string class_name = "android/sax/StartElementListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER)
#define SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/xml/sax/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::sax::StartElementListener : public jni::object_base<"android/sax/StartElementListener",
	java::lang::Object>
{
public:

	void start(jni::ref<org::xml::sax::Attributes> p1) { return call_method<"start", void>(p1); }

protected:

	StartElementListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SAX_STARTELEMENTLISTENER
