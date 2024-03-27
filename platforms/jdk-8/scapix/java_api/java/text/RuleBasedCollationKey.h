// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/CollationKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class RuleBasedCollationKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::RuleBasedCollationKey>
{
	static constexpr fixed_string class_name = "java/text/RuleBasedCollationKey";
	using base_classes = std::tuple<scapix::java_api::java::text::CollationKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY)
#define SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::RuleBasedCollationKey : public jni::object_base<"java/text/RuleBasedCollationKey",
	java::text::CollationKey>
{
public:

	jint compareTo(jni::ref<java::text::CollationKey> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }

protected:

	RuleBasedCollationKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATIONKEY
