// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class Edits; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::Edits>
{
	static constexpr fixed_string class_name = "android/icu/text/Edits";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/Edits_Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::Edits : public jni::object_base<"android/icu/text/Edits",
	java::lang::Object>
{
public:

	using Iterator = Edits_Iterator;

	static jni::ref<android::icu::text::Edits> new_object() { return base_::new_object(); }
	void reset() { return call_method<"reset", void>(); }
	void addUnchanged(jint unchangedLength) { return call_method<"addUnchanged", void>(unchangedLength); }
	void addReplace(jint oldLength, jint newLength) { return call_method<"addReplace", void>(oldLength, newLength); }
	jint lengthDelta() { return call_method<"lengthDelta", jint>(); }
	jboolean hasChanges() { return call_method<"hasChanges", jboolean>(); }
	jint numberOfChanges() { return call_method<"numberOfChanges", jint>(); }
	jni::ref<android::icu::text::Edits_Iterator> getCoarseChangesIterator() { return call_method<"getCoarseChangesIterator", jni::ref<android::icu::text::Edits_Iterator>>(); }
	jni::ref<android::icu::text::Edits_Iterator> getCoarseIterator() { return call_method<"getCoarseIterator", jni::ref<android::icu::text::Edits_Iterator>>(); }
	jni::ref<android::icu::text::Edits_Iterator> getFineChangesIterator() { return call_method<"getFineChangesIterator", jni::ref<android::icu::text::Edits_Iterator>>(); }
	jni::ref<android::icu::text::Edits_Iterator> getFineIterator() { return call_method<"getFineIterator", jni::ref<android::icu::text::Edits_Iterator>>(); }
	jni::ref<android::icu::text::Edits> mergeAndAppend(jni::ref<android::icu::text::Edits> ab, jni::ref<android::icu::text::Edits> bc) { return call_method<"mergeAndAppend", jni::ref<android::icu::text::Edits>>(ab, bc); }

protected:

	Edits(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_EDITS
