// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/FreezableList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class IdentifiableContainerBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::IdentifiableContainerBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/IdentifiableContainerBase";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::FreezableList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::IdentifiableContainerBase : public jni::object_base<"com/sun/corba/se/spi/ior/IdentifiableContainerBase",
	com::sun::corba::se::impl::ior::FreezableList>
{
public:

	static jni::ref<com::sun::corba::se::spi::ior::IdentifiableContainerBase> new_object() { return base_::new_object(); }
	jni::ref<java::util::Iterator> iteratorById(jint p1) { return call_method<"iteratorById", jni::ref<java::util::Iterator>>(p1); }

protected:

	IdentifiableContainerBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IDENTIFIABLECONTAINERBASE