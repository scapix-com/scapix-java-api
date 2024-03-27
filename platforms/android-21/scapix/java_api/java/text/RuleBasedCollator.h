// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Collator.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class RuleBasedCollator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::RuleBasedCollator>
{
	static constexpr fixed_string class_name = "java/text/RuleBasedCollator";
	using base_classes = std::tuple<scapix::java_api::java::text::Collator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR)
#define SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#include <scapix/java_api/java/text/CollationElementIterator.h>
#include <scapix/java_api/java/text/CollationKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::RuleBasedCollator : public jni::object_base<"java/text/RuleBasedCollator",
	java::text::Collator>
{
public:

	static jni::ref<java::text::RuleBasedCollator> new_object(jni::ref<java::lang::String> rules) { return base_::new_object(rules); }
	jni::ref<java::text::CollationElementIterator> getCollationElementIterator(jni::ref<java::text::CharacterIterator> source) { return call_method<"getCollationElementIterator", jni::ref<java::text::CollationElementIterator>>(source); }
	jni::ref<java::text::CollationElementIterator> getCollationElementIterator(jni::ref<java::lang::String> source) { return call_method<"getCollationElementIterator", jni::ref<java::text::CollationElementIterator>>(source); }
	jni::ref<java::lang::String> getRules() { return call_method<"getRules", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint compare(jni::ref<java::lang::String> source, jni::ref<java::lang::String> target) { return call_method<"compare", jint>(source, target); }
	jni::ref<java::text::CollationKey> getCollationKey(jni::ref<java::lang::String> source) { return call_method<"getCollationKey", jni::ref<java::text::CollationKey>>(source); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	RuleBasedCollator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RULEBASEDCOLLATOR
