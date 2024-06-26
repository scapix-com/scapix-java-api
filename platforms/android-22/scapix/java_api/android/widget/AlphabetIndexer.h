// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/DataSetObserver.h>
#include <scapix/java_api/android/widget/SectionIndexer.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AlphabetIndexer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AlphabetIndexer>
{
	static constexpr fixed_string class_name = "android/widget/AlphabetIndexer";
	using base_classes = std::tuple<scapix::java_api::android::database::DataSetObserver, scapix::java_api::android::widget::SectionIndexer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AlphabetIndexer : public jni::object_base<"android/widget/AlphabetIndexer",
	android::database::DataSetObserver,
	android::widget::SectionIndexer>
{
public:

	static jni::ref<android::widget::AlphabetIndexer> new_object(jni::ref<android::database::Cursor> cursor, jint sortedColumnIndex, jni::ref<java::lang::CharSequence> alphabet) { return base_::new_object(cursor, sortedColumnIndex, alphabet); }
	jni::ref<jni::array<java::lang::Object>> getSections() { return call_method<"getSections", jni::ref<jni::array<java::lang::Object>>>(); }
	void setCursor(jni::ref<android::database::Cursor> cursor) { return call_method<"setCursor", void>(cursor); }
	jint getPositionForSection(jint sectionIndex) { return call_method<"getPositionForSection", jint>(sectionIndex); }
	jint getSectionForPosition(jint position) { return call_method<"getSectionForPosition", jint>(position); }
	void onChanged() { return call_method<"onChanged", void>(); }
	void onInvalidated() { return call_method<"onInvalidated", void>(); }

protected:

	AlphabetIndexer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ALPHABETINDEXER
