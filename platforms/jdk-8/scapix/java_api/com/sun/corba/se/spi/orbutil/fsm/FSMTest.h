// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::fsm { class FSMTest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::FSMTest>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/fsm/FSMTest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Input.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/State.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::fsm::FSMTest : public jni::object_base<"com/sun/corba/se/spi/orbutil/fsm/FSMTest",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> STATE1() { return get_static_field<"STATE1", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> STATE2() { return get_static_field<"STATE2", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> STATE3() { return get_static_field<"STATE3", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> STATE4() { return get_static_field<"STATE4", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> INPUT1() { return get_static_field<"INPUT1", jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> INPUT2() { return get_static_field<"INPUT2", jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> INPUT3() { return get_static_field<"INPUT3", jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> INPUT4() { return get_static_field<"INPUT4", jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input>>(); }

	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::FSMTest> new_object() { return base_::new_object(); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	FSMTest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_FSMTEST
