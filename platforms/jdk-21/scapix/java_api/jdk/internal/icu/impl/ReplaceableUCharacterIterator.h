// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/icu/text/UCharacterIterator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class ReplaceableUCharacterIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::ReplaceableUCharacterIterator>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/ReplaceableUCharacterIterator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::icu::text::UCharacterIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::ReplaceableUCharacterIterator : public jni::object_base<"jdk/internal/icu/impl/ReplaceableUCharacterIterator",
	jdk::internal::icu::text::UCharacterIterator>
{
public:

	static jni::ref<jdk::internal::icu::impl::ReplaceableUCharacterIterator> new_object(jni::ref<java::lang::String> str) { return base_::new_object(str); }
	static jni::ref<jdk::internal::icu::impl::ReplaceableUCharacterIterator> new_object(jni::ref<java::lang::StringBuffer> buf) { return base_::new_object(buf); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint current() { return call_method<"current", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint next() { return call_method<"next", jint>(); }
	jint previous() { return call_method<"previous", jint>(); }
	void setIndex(jint currentIndex) { return call_method<"setIndex", void>(currentIndex); }
	jint getText(jni::ref<jni::array<jchar>> fillIn, jint offset) { return call_method<"getText", jint>(fillIn, offset); }

protected:

	ReplaceableUCharacterIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_REPLACEABLEUCHARACTERITERATOR