// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/regex/Op_ChildOp.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex { class Op_ModifierOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op_ModifierOp>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op_ChildOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xpath::regex::Op_ModifierOp : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp",
	com::sun::org::apache::xerces::internal::impl::xpath::regex::Op_ChildOp>
{
public:


protected:

	Op_ModifierOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_OP_MODIFIEROP
