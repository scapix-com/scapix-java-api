// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/MakeImmutable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class IORTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::IORTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/IORTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::List, scapix::java_api::com::sun::corba::se::spi::ior::IORFactory, scapix::java_api::com::sun::corba::se::spi::ior::MakeImmutable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::IORTemplate : public jni::object_base<"com/sun/corba/se/spi/ior/IORTemplate",
	java::lang::Object,
	java::util::List,
	com::sun::corba::se::spi::ior::IORFactory,
	com::sun::corba::se::spi::ior::MakeImmutable>
{
public:

	jni::ref<java::util::Iterator> iteratorById(jint p1) { return call_method<"iteratorById", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> getObjectKeyTemplate() { return call_method<"getObjectKeyTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(); }

protected:

	IORTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORTEMPLATE
