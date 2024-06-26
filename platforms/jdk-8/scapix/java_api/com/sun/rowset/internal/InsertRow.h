// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/rowset/internal/BaseRow.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW_FWD
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::rowset::internal { class InsertRow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::rowset::internal::InsertRow>
{
	static constexpr fixed_string class_name = "com/sun/rowset/internal/InsertRow";
	using base_classes = std::tuple<scapix::java_api::com::sun::rowset::internal::BaseRow, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW)
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sql/RowSetMetaData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::rowset::internal::InsertRow : public jni::object_base<"com/sun/rowset/internal/InsertRow",
	com::sun::rowset::internal::BaseRow,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::rowset::internal::InsertRow> new_object(jint p1) { return base_::new_object(p1); }
	jboolean isCompleteRow(jni::ref<javax::sql::RowSetMetaData> p1) { return call_method<"isCompleteRow", jboolean>(p1); }
	void initInsertRow() { return call_method<"initInsertRow", void>(); }
	jni::ref<java::lang::Object> getColumnObject(jint p1) { return call_method<"getColumnObject", jni::ref<java::lang::Object>>(p1); }
	void setColumnObject(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"setColumnObject", void>(p1, p2); }

protected:

	InsertRow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_INSERTROW
