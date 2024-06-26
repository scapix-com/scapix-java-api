// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class IIOP_CLEAR_TEXT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::IIOP_CLEAR_TEXT>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/IIOP_CLEAR_TEXT";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::IIOP_CLEAR_TEXT : public jni::object_base<"com/sun/corba/se/spi/activation/IIOP_CLEAR_TEXT",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> value() { return get_static_field<"value", jni::ref<java::lang::String>>(); }


protected:

	IIOP_CLEAR_TEXT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_IIOP_CLEAR_TEXT
