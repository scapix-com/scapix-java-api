// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class CollationElementIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::CollationElementIterator>
{
	static constexpr fixed_string class_name = "android/icu/text/CollationElementIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/UCharacterIterator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::CollationElementIterator : public jni::object_base<"android/icu/text/CollationElementIterator",
	java::lang::Object>
{
public:

	static jint IGNORABLE() { return get_static_field<"IGNORABLE", jint>(); }
	static jint NULLORDER() { return get_static_field<"NULLORDER", jint>(); }

	static jint primaryOrder(jint ce) { return call_static_method<"primaryOrder", jint>(ce); }
	static jint secondaryOrder(jint ce) { return call_static_method<"secondaryOrder", jint>(ce); }
	static jint tertiaryOrder(jint ce) { return call_static_method<"tertiaryOrder", jint>(ce); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	jint next() { return call_method<"next", jint>(); }
	jint previous() { return call_method<"previous", jint>(); }
	void reset() { return call_method<"reset", void>(); }
	void setOffset(jint newOffset) { return call_method<"setOffset", void>(newOffset); }
	void setText(jni::ref<java::lang::String> source) { return call_method<"setText", void>(source); }
	void setText(jni::ref<android::icu::text::UCharacterIterator> source) { return call_method<"setText", void>(source); }
	void setText(jni::ref<java::text::CharacterIterator> source) { return call_method<"setText", void>(source); }
	jint getMaxExpansion(jint ce) { return call_method<"getMaxExpansion", jint>(ce); }
	jboolean equals(jni::ref<java::lang::Object> that) { return call_method<"equals", jboolean>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	CollationElementIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR
