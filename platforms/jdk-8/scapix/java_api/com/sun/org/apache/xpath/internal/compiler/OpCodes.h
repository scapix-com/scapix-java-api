// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::compiler { class OpCodes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::OpCodes>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/compiler/OpCodes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::compiler::OpCodes : public jni::object_base<"com/sun/org/apache/xpath/internal/compiler/OpCodes",
	java::lang::Object>
{
public:

	static jint ENDOP() { return get_static_field<"ENDOP", jint>(); }
	static jint EMPTY() { return get_static_field<"EMPTY", jint>(); }
	static jint ELEMWILDCARD() { return get_static_field<"ELEMWILDCARD", jint>(); }
	static jint OP_XPATH() { return get_static_field<"OP_XPATH", jint>(); }
	static jint OP_OR() { return get_static_field<"OP_OR", jint>(); }
	static jint OP_AND() { return get_static_field<"OP_AND", jint>(); }
	static jint OP_NOTEQUALS() { return get_static_field<"OP_NOTEQUALS", jint>(); }
	static jint OP_EQUALS() { return get_static_field<"OP_EQUALS", jint>(); }
	static jint OP_LTE() { return get_static_field<"OP_LTE", jint>(); }
	static jint OP_LT() { return get_static_field<"OP_LT", jint>(); }
	static jint OP_GTE() { return get_static_field<"OP_GTE", jint>(); }
	static jint OP_GT() { return get_static_field<"OP_GT", jint>(); }
	static jint OP_PLUS() { return get_static_field<"OP_PLUS", jint>(); }
	static jint OP_MINUS() { return get_static_field<"OP_MINUS", jint>(); }
	static jint OP_MULT() { return get_static_field<"OP_MULT", jint>(); }
	static jint OP_DIV() { return get_static_field<"OP_DIV", jint>(); }
	static jint OP_MOD() { return get_static_field<"OP_MOD", jint>(); }
	static jint OP_QUO() { return get_static_field<"OP_QUO", jint>(); }
	static jint OP_NEG() { return get_static_field<"OP_NEG", jint>(); }
	static jint OP_STRING() { return get_static_field<"OP_STRING", jint>(); }
	static jint OP_BOOL() { return get_static_field<"OP_BOOL", jint>(); }
	static jint OP_NUMBER() { return get_static_field<"OP_NUMBER", jint>(); }
	static jint OP_UNION() { return get_static_field<"OP_UNION", jint>(); }
	static jint OP_LITERAL() { return get_static_field<"OP_LITERAL", jint>(); }
	static jint OP_VARIABLE() { return get_static_field<"OP_VARIABLE", jint>(); }
	static jint OP_GROUP() { return get_static_field<"OP_GROUP", jint>(); }
	static jint OP_EXTFUNCTION() { return get_static_field<"OP_EXTFUNCTION", jint>(); }
	static jint OP_FUNCTION() { return get_static_field<"OP_FUNCTION", jint>(); }
	static jint OP_ARGUMENT() { return get_static_field<"OP_ARGUMENT", jint>(); }
	static jint OP_NUMBERLIT() { return get_static_field<"OP_NUMBERLIT", jint>(); }
	static jint OP_LOCATIONPATH() { return get_static_field<"OP_LOCATIONPATH", jint>(); }
	static jint OP_PREDICATE() { return get_static_field<"OP_PREDICATE", jint>(); }
	static jint OP_MATCHPATTERN() { return get_static_field<"OP_MATCHPATTERN", jint>(); }
	static jint OP_LOCATIONPATHPATTERN() { return get_static_field<"OP_LOCATIONPATHPATTERN", jint>(); }
	static jint NODETYPE_COMMENT() { return get_static_field<"NODETYPE_COMMENT", jint>(); }
	static jint NODETYPE_TEXT() { return get_static_field<"NODETYPE_TEXT", jint>(); }
	static jint NODETYPE_PI() { return get_static_field<"NODETYPE_PI", jint>(); }
	static jint NODETYPE_NODE() { return get_static_field<"NODETYPE_NODE", jint>(); }
	static jint NODENAME() { return get_static_field<"NODENAME", jint>(); }
	static jint NODETYPE_ROOT() { return get_static_field<"NODETYPE_ROOT", jint>(); }
	static jint NODETYPE_ANYELEMENT() { return get_static_field<"NODETYPE_ANYELEMENT", jint>(); }
	static jint NODETYPE_FUNCTEST() { return get_static_field<"NODETYPE_FUNCTEST", jint>(); }
	static jint AXES_START_TYPES() { return get_static_field<"AXES_START_TYPES", jint>(); }
	static jint FROM_ANCESTORS() { return get_static_field<"FROM_ANCESTORS", jint>(); }
	static jint FROM_ANCESTORS_OR_SELF() { return get_static_field<"FROM_ANCESTORS_OR_SELF", jint>(); }
	static jint FROM_ATTRIBUTES() { return get_static_field<"FROM_ATTRIBUTES", jint>(); }
	static jint FROM_CHILDREN() { return get_static_field<"FROM_CHILDREN", jint>(); }
	static jint FROM_DESCENDANTS() { return get_static_field<"FROM_DESCENDANTS", jint>(); }
	static jint FROM_DESCENDANTS_OR_SELF() { return get_static_field<"FROM_DESCENDANTS_OR_SELF", jint>(); }
	static jint FROM_FOLLOWING() { return get_static_field<"FROM_FOLLOWING", jint>(); }
	static jint FROM_FOLLOWING_SIBLINGS() { return get_static_field<"FROM_FOLLOWING_SIBLINGS", jint>(); }
	static jint FROM_PARENT() { return get_static_field<"FROM_PARENT", jint>(); }
	static jint FROM_PRECEDING() { return get_static_field<"FROM_PRECEDING", jint>(); }
	static jint FROM_PRECEDING_SIBLINGS() { return get_static_field<"FROM_PRECEDING_SIBLINGS", jint>(); }
	static jint FROM_SELF() { return get_static_field<"FROM_SELF", jint>(); }
	static jint FROM_NAMESPACE() { return get_static_field<"FROM_NAMESPACE", jint>(); }
	static jint FROM_ROOT() { return get_static_field<"FROM_ROOT", jint>(); }
	static jint MATCH_ATTRIBUTE() { return get_static_field<"MATCH_ATTRIBUTE", jint>(); }
	static jint MATCH_ANY_ANCESTOR() { return get_static_field<"MATCH_ANY_ANCESTOR", jint>(); }
	static jint MATCH_IMMEDIATE_ANCESTOR() { return get_static_field<"MATCH_IMMEDIATE_ANCESTOR", jint>(); }
	static jint AXES_END_TYPES() { return get_static_field<"AXES_END_TYPES", jint>(); }

	static jni::ref<com::sun::org::apache::xpath::internal::compiler::OpCodes> new_object() { return base_::new_object(); }

protected:

	OpCodes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPCODES
