// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::serial { class SerialJavaObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::serial::SerialJavaObject>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/serial/SerialJavaObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::serial::SerialJavaObject : public jni::object_base<"javax/sql/rowset/serial/SerialJavaObject",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::sql::rowset::serial::SerialJavaObject> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> getObject() { return call_method<"getObject", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<java::lang::reflect::Field>> getFields() { return call_method<"getFields", jni::ref<jni::array<java::lang::reflect::Field>>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	SerialJavaObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALJAVAOBJECT
