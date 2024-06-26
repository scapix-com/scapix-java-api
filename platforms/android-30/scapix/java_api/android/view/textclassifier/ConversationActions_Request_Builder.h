// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class ConversationActions_Request_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::ConversationActions_Request_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/ConversationActions$Request$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/textclassifier/ConversationActions_Request.h>
#include <scapix/java_api/android/view/textclassifier/TextClassifier_EntityConfig.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::ConversationActions_Request_Builder : public jni::object_base<"android/view/textclassifier/ConversationActions$Request$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::ConversationActions_Request_Builder> new_object(jni::ref<java::util::List> conversation) { return base_::new_object(conversation); }
	jni::ref<android::view::textclassifier::ConversationActions_Request_Builder> setHints(jni::ref<java::util::List> hints) { return call_method<"setHints", jni::ref<android::view::textclassifier::ConversationActions_Request_Builder>>(hints); }
	jni::ref<android::view::textclassifier::ConversationActions_Request_Builder> setTypeConfig(jni::ref<android::view::textclassifier::TextClassifier_EntityConfig> typeConfig) { return call_method<"setTypeConfig", jni::ref<android::view::textclassifier::ConversationActions_Request_Builder>>(typeConfig); }
	jni::ref<android::view::textclassifier::ConversationActions_Request_Builder> setMaxSuggestions(jint maxSuggestions) { return call_method<"setMaxSuggestions", jni::ref<android::view::textclassifier::ConversationActions_Request_Builder>>(maxSuggestions); }
	jni::ref<android::view::textclassifier::ConversationActions_Request_Builder> setExtras(jni::ref<android::os::Bundle> bundle) { return call_method<"setExtras", jni::ref<android::view::textclassifier::ConversationActions_Request_Builder>>(bundle); }
	jni::ref<android::view::textclassifier::ConversationActions_Request> build() { return call_method<"build", jni::ref<android::view::textclassifier::ConversationActions_Request>>(); }

protected:

	ConversationActions_Request_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER
