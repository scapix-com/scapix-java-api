// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU_FWD
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::smartcardio { class ResponseAPDU; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::smartcardio::ResponseAPDU>
{
	static constexpr fixed_string class_name = "javax/smartcardio/ResponseAPDU";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU)
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::smartcardio::ResponseAPDU : public jni::object_base<"javax/smartcardio/ResponseAPDU",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::smartcardio::ResponseAPDU> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	jint getNr() { return call_method<"getNr", jint>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jint getSW1() { return call_method<"getSW1", jint>(); }
	jint getSW2() { return call_method<"getSW2", jint>(); }
	jint getSW() { return call_method<"getSW", jint>(); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ResponseAPDU(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_RESPONSEAPDU
