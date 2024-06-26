// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Writeable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class ObjectAdapterId; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::ObjectAdapterId>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/ObjectAdapterId";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::Writeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::ObjectAdapterId : public jni::object_base<"com/sun/corba/se/spi/ior/ObjectAdapterId",
	java::lang::Object,
	com::sun::corba::se::spi::ior::Writeable>
{
public:

	jint getNumLevels() { return call_method<"getNumLevels", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::String>> getAdapterName() { return call_method<"getAdapterName", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	ObjectAdapterId(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTADAPTERID
