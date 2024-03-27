// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class Translator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::Translator>
{
	static constexpr fixed_string class_name = "android/view/translation/Translator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/view/translation/TranslationRequest.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::Translator : public jni::object_base<"android/view/translation/Translator",
	java::lang::Object>
{
public:

	void translate(jni::ref<android::view::translation::TranslationRequest> request, jni::ref<android::os::CancellationSignal> cancellationSignal, jni::ref<java::util::concurrent::Executor> executor, jni::ref<java::util::function::Consumer> callback) { return call_method<"translate", void>(request, cancellationSignal, executor, callback); }
	void destroy() { return call_method<"destroy", void>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }

protected:

	Translator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATOR
