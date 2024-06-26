// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::oa { class OADestroyed; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::oa::OADestroyed>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/oa/OADestroyed";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::oa::OADestroyed : public jni::object_base<"com/sun/corba/se/spi/oa/OADestroyed",
	java::lang::Exception>
{
public:

	static jni::ref<com::sun::corba::se::spi::oa::OADestroyed> new_object() { return base_::new_object(); }

protected:

	OADestroyed(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OADESTROYED
