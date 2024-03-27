// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_CharProperty.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_CharPropertyNames_CloneableProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_CharPropertyNames_CloneableProperty>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$CharPropertyNames$CloneableProperty";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_CharProperty, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_CharPropertyNames_CloneableProperty : public jni::object_base<"java/util/regex/Pattern$CharPropertyNames$CloneableProperty",
	java::util::regex::Pattern_CharProperty,
	java::lang::Cloneable>
{
public:

	jni::ref<java::util::regex::Pattern_CharPropertyNames_CloneableProperty> clone() { return call_method<"clone", jni::ref<java::util::regex::Pattern_CharPropertyNames_CloneableProperty>>(); }

protected:

	Pattern_CharPropertyNames_CloneableProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYNAMES_CLONEABLEPROPERTY