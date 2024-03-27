// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class SearchIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::SearchIterator>
{
	static constexpr fixed_string class_name = "android/icu/text/SearchIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/BreakIterator.h>
#include <scapix/java_api/android/icu/text/SearchIterator_ElementComparisonType.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::SearchIterator : public jni::object_base<"android/icu/text/SearchIterator",
	java::lang::Object>
{
public:

	using ElementComparisonType = SearchIterator_ElementComparisonType;

	static jint DONE() { return get_static_field<"DONE", jint>(); }

	void setIndex(jint position) { return call_method<"setIndex", void>(position); }
	void setOverlapping(jboolean allowOverlap) { return call_method<"setOverlapping", void>(allowOverlap); }
	void setBreakIterator(jni::ref<android::icu::text::BreakIterator> breakiter) { return call_method<"setBreakIterator", void>(breakiter); }
	void setTarget(jni::ref<java::text::CharacterIterator> text) { return call_method<"setTarget", void>(text); }
	jint getMatchStart() { return call_method<"getMatchStart", jint>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint getMatchLength() { return call_method<"getMatchLength", jint>(); }
	jni::ref<android::icu::text::BreakIterator> getBreakIterator() { return call_method<"getBreakIterator", jni::ref<android::icu::text::BreakIterator>>(); }
	jni::ref<java::text::CharacterIterator> getTarget() { return call_method<"getTarget", jni::ref<java::text::CharacterIterator>>(); }
	jni::ref<java::lang::String> getMatchedText() { return call_method<"getMatchedText", jni::ref<java::lang::String>>(); }
	jint next() { return call_method<"next", jint>(); }
	jint previous() { return call_method<"previous", jint>(); }
	jboolean isOverlapping() { return call_method<"isOverlapping", jboolean>(); }
	void reset() { return call_method<"reset", void>(); }
	jint first() { return call_method<"first", jint>(); }
	jint following(jint position) { return call_method<"following", jint>(position); }
	jint last() { return call_method<"last", jint>(); }
	jint preceding(jint position) { return call_method<"preceding", jint>(position); }
	void setElementComparisonType(jni::ref<android::icu::text::SearchIterator_ElementComparisonType> type) { return call_method<"setElementComparisonType", void>(type); }
	jni::ref<android::icu::text::SearchIterator_ElementComparisonType> getElementComparisonType() { return call_method<"getElementComparisonType", jni::ref<android::icu::text::SearchIterator_ElementComparisonType>>(); }

protected:

	SearchIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SEARCHITERATOR
