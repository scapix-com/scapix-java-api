// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/text/CharacterIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class StringCharacterIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::StringCharacterIterator>
{
	static constexpr fixed_string class_name = "java/text/StringCharacterIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::text::CharacterIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR)
#define SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::StringCharacterIterator : public jni::object_base<"java/text/StringCharacterIterator",
	java::lang::Object,
	java::text::CharacterIterator>
{
public:

	static jni::ref<java::text::StringCharacterIterator> new_object(jni::ref<java::lang::String> value) { return base_::new_object(value); }
	static jni::ref<java::text::StringCharacterIterator> new_object(jni::ref<java::lang::String> value, jint location) { return base_::new_object(value, location); }
	static jni::ref<java::text::StringCharacterIterator> new_object(jni::ref<java::lang::String> value, jint start, jint end, jint location) { return base_::new_object(value, start, end, location); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jchar current() { return call_method<"current", jchar>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jchar first() { return call_method<"first", jchar>(); }
	jint getBeginIndex() { return call_method<"getBeginIndex", jint>(); }
	jint getEndIndex() { return call_method<"getEndIndex", jint>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jchar last() { return call_method<"last", jchar>(); }
	jchar next() { return call_method<"next", jchar>(); }
	jchar previous() { return call_method<"previous", jchar>(); }
	jchar setIndex(jint location) { return call_method<"setIndex", jchar>(location); }
	void setText(jni::ref<java::lang::String> value) { return call_method<"setText", void>(value); }

protected:

	StringCharacterIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_STRINGCHARACTERITERATOR
