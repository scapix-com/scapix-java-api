// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers { class SmallContainer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::SmallContainer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/traversers/SmallContainer";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xs::traversers::SmallContainer : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/traversers/SmallContainer",
	com::sun::org::apache::xerces::internal::impl::xs::traversers::Container>
{
public:


protected:

	SmallContainer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SMALLCONTAINER
