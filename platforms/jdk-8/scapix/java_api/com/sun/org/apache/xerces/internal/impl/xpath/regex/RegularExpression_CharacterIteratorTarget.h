// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression_ExpressionTarget.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex { class RegularExpression_CharacterIteratorTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression_CharacterIteratorTarget>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharacterIteratorTarget";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression_ExpressionTarget>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression_CharacterIteratorTarget : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharacterIteratorTarget",
	com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression_ExpressionTarget>
{
public:


protected:

	RegularExpression_CharacterIteratorTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_REGULAREXPRESSION_CHARACTERITERATORTARGET
