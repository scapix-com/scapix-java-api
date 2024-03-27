// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class StringPair; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::StringPair>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/StringPair";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orb::StringPair : public jni::object_base<"com/sun/corba/se/spi/orb/StringPair",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<com::sun::corba::se::spi::orb::StringPair> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getFirst() { return call_method<"getFirst", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSecond() { return call_method<"getSecond", jni::ref<java::lang::String>>(); }

protected:

	StringPair(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_STRINGPAIR