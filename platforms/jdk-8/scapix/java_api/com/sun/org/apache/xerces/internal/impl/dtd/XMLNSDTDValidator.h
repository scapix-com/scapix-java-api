// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class XMLNSDTDValidator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLNSDTDValidator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/XMLNSDTDValidator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::XMLNSDTDValidator : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/XMLNSDTDValidator",
	com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLNSDTDValidator> new_object() { return base_::new_object(); }

protected:

	XMLNSDTDValidator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLNSDTDVALIDATOR
