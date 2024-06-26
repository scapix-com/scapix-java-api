// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::assist { class AssistStructure_WindowNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::assist::AssistStructure_WindowNode>
{
	static constexpr fixed_string class_name = "android/app/assist/AssistStructure$WindowNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE)
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/assist/AssistStructure_ViewNode.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::assist::AssistStructure_WindowNode : public jni::object_base<"android/app/assist/AssistStructure$WindowNode",
	java::lang::Object>
{
public:

	jint getLeft() { return call_method<"getLeft", jint>(); }
	jint getTop() { return call_method<"getTop", jint>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jint getDisplayId() { return call_method<"getDisplayId", jint>(); }
	jni::ref<android::app::assist::AssistStructure_ViewNode> getRootViewNode() { return call_method<"getRootViewNode", jni::ref<android::app::assist::AssistStructure_ViewNode>>(); }

protected:

	AssistStructure_WindowNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE
