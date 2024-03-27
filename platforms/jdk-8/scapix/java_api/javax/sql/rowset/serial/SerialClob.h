// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/Clob.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::serial { class SerialClob; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::serial::SerialClob>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/serial/SerialClob";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::sql::Clob, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::serial::SerialClob : public jni::object_base<"javax/sql/rowset/serial/SerialClob",
	java::lang::Object,
	java::sql::Clob,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::sql::rowset::serial::SerialClob> new_object(jni::ref<jni::array<jchar>> p1) { return base_::new_object(p1); }
	static jni::ref<javax::sql::rowset::serial::SerialClob> new_object(jni::ref<java::sql::Clob> p1) { return base_::new_object(p1); }
	jlong length() { return call_method<"length", jlong>(); }
	jni::ref<java::io::Reader> getCharacterStream() { return call_method<"getCharacterStream", jni::ref<java::io::Reader>>(); }
	jni::ref<java::io::InputStream> getAsciiStream() { return call_method<"getAsciiStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::lang::String> getSubString(jlong p1, jint p2) { return call_method<"getSubString", jni::ref<java::lang::String>>(p1, p2); }
	jlong position(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"position", jlong>(p1, p2); }
	jlong position(jni::ref<java::sql::Clob> p1, jlong p2) { return call_method<"position", jlong>(p1, p2); }
	jint setString(jlong p1, jni::ref<java::lang::String> p2) { return call_method<"setString", jint>(p1, p2); }
	jint setString(jlong p1, jni::ref<java::lang::String> p2, jint p3, jint p4) { return call_method<"setString", jint>(p1, p2, p3, p4); }
	jni::ref<java::io::OutputStream> setAsciiStream(jlong p1) { return call_method<"setAsciiStream", jni::ref<java::io::OutputStream>>(p1); }
	jni::ref<java::io::Writer> setCharacterStream(jlong p1) { return call_method<"setCharacterStream", jni::ref<java::io::Writer>>(p1); }
	void truncate(jlong p1) { return call_method<"truncate", void>(p1); }
	jni::ref<java::io::Reader> getCharacterStream(jlong p1, jlong p2) { return call_method<"getCharacterStream", jni::ref<java::io::Reader>>(p1, p2); }
	void free() { return call_method<"free", void>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	SerialClob(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALCLOB
