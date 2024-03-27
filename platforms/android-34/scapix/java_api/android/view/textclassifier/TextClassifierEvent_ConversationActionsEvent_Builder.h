// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/textclassifier/TextClassifierEvent_Builder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassifierEvent_ConversationActionsEvent_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassifierEvent$ConversationActionsEvent$Builder";
	using base_classes = std::tuple<scapix::java_api::android::view::textclassifier::TextClassifierEvent_Builder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/textclassifier/TextClassifierEvent_ConversationActionsEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent_Builder : public jni::object_base<"android/view/textclassifier/TextClassifierEvent$ConversationActionsEvent$Builder",
	android::view::textclassifier::TextClassifierEvent_Builder>
{
public:

	static jni::ref<android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent_Builder> new_object(jint eventType) { return base_::new_object(eventType); }
	jni::ref<android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent> build() { return call_method<"build", jni::ref<android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent>>(); }

protected:

	TextClassifierEvent_ConversationActionsEvent_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER