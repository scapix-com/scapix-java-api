// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sql/rowset/RowSetFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::rowset { class RowSetFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::rowset::RowSetFactoryImpl>
{
	static constexpr fixed_string class_name = "com/sun/rowset/RowSetFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sql::rowset::RowSetFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sql/rowset/CachedRowSet.h>
#include <scapix/java_api/javax/sql/rowset/FilteredRowSet.h>
#include <scapix/java_api/javax/sql/rowset/JdbcRowSet.h>
#include <scapix/java_api/javax/sql/rowset/JoinRowSet.h>
#include <scapix/java_api/javax/sql/rowset/WebRowSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::rowset::RowSetFactoryImpl : public jni::object_base<"com/sun/rowset/RowSetFactoryImpl",
	java::lang::Object,
	javax::sql::rowset::RowSetFactory>
{
public:

	static jni::ref<com::sun::rowset::RowSetFactoryImpl> new_object() { return base_::new_object(); }
	jni::ref<javax::sql::rowset::CachedRowSet> createCachedRowSet() { return call_method<"createCachedRowSet", jni::ref<javax::sql::rowset::CachedRowSet>>(); }
	jni::ref<javax::sql::rowset::FilteredRowSet> createFilteredRowSet() { return call_method<"createFilteredRowSet", jni::ref<javax::sql::rowset::FilteredRowSet>>(); }
	jni::ref<javax::sql::rowset::JdbcRowSet> createJdbcRowSet() { return call_method<"createJdbcRowSet", jni::ref<javax::sql::rowset::JdbcRowSet>>(); }
	jni::ref<javax::sql::rowset::JoinRowSet> createJoinRowSet() { return call_method<"createJoinRowSet", jni::ref<javax::sql::rowset::JoinRowSet>>(); }
	jni::ref<javax::sql::rowset::WebRowSet> createWebRowSet() { return call_method<"createWebRowSet", jni::ref<javax::sql::rowset::WebRowSet>>(); }

protected:

	RowSetFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_ROWSETFACTORYIMPL
