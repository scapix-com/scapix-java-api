// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class Collator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::Collator>
{
	static constexpr fixed_string class_name = "java/text/Collator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR)
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CollationKey.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::Collator : public jni::object_base<"java/text/Collator",
	java::lang::Object,
	java::util::Comparator,
	java::lang::Cloneable>
{
public:

	static jint CANONICAL_DECOMPOSITION() { return get_static_field<"CANONICAL_DECOMPOSITION", jint>(); }
	static jint FULL_DECOMPOSITION() { return get_static_field<"FULL_DECOMPOSITION", jint>(); }
	static jint IDENTICAL() { return get_static_field<"IDENTICAL", jint>(); }
	static jint NO_DECOMPOSITION() { return get_static_field<"NO_DECOMPOSITION", jint>(); }
	static jint PRIMARY() { return get_static_field<"PRIMARY", jint>(); }
	static jint SECONDARY() { return get_static_field<"SECONDARY", jint>(); }
	static jint TERTIARY() { return get_static_field<"TERTIARY", jint>(); }

	static jni::ref<java::text::Collator> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::Collator>>(); }
	static jni::ref<java::text::Collator> getInstance(jni::ref<java::util::Locale> desiredLocale) { return call_static_method<"getInstance", jni::ref<java::text::Collator>>(desiredLocale); }
	jint compare(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"compare", jint>(p1, p2); }
	jint compare(jni::ref<java::lang::Object> o1, jni::ref<java::lang::Object> o2) { return call_method<"compare", jint>(o1, o2); }
	jni::ref<java::text::CollationKey> getCollationKey(jni::ref<java::lang::String> p1) { return call_method<"getCollationKey", jni::ref<java::text::CollationKey>>(p1); }
	jboolean equals(jni::ref<java::lang::String> source, jni::ref<java::lang::String> target) { return call_method<"equals", jboolean>(source, target); }
	jint getStrength() { return call_method<"getStrength", jint>(); }
	void setStrength(jint newStrength) { return call_method<"setStrength", void>(newStrength); }
	jint getDecomposition() { return call_method<"getDecomposition", jint>(); }
	void setDecomposition(jint decompositionMode) { return call_method<"setDecomposition", void>(decompositionMode); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> that) { return call_method<"equals", jboolean>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Collator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATOR
