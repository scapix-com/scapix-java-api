// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator_ValueStoreBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XMLSchemaValidator_KeyValueStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator_KeyValueStore>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator_ValueStoreBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator_KeyValueStore : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore",
	com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator_ValueStoreBase>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator_KeyValueStore> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey> p2) { return base_::new_object(p1, p2); }

protected:

	XMLSchemaValidator_KeyValueStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XMLSCHEMAVALIDATOR_KEYVALUESTORE
