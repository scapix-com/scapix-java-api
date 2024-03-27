// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::fsm { class TestInput; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::TestInput>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/fsm/TestInput";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Input.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::spi::orbutil::fsm::TestInput : public jni::object_base<"com/sun/corba/se/spi/orbutil/fsm/TestInput",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> getInput() { return call_method<"getInput", jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input>>(); }

protected:

	TestInput(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_TESTINPUT
