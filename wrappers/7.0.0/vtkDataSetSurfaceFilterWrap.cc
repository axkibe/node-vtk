/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDataSetSurfaceFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetSurfaceFilterWrap::ptpl;

VtkDataSetSurfaceFilterWrap::VtkDataSetSurfaceFilterWrap()
{ }

VtkDataSetSurfaceFilterWrap::VtkDataSetSurfaceFilterWrap(vtkSmartPointer<vtkDataSetSurfaceFilter> _native)
{ native = _native; }

VtkDataSetSurfaceFilterWrap::~VtkDataSetSurfaceFilterWrap()
{ }

void VtkDataSetSurfaceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSetSurfaceFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSetSurfaceFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetSurfaceFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetSurfaceFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetSurfaceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DataSetExecute", DataSetExecute);
	Nan::SetPrototypeMethod(tpl, "dataSetExecute", DataSetExecute);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNonlinearSubdivisionLevel", GetNonlinearSubdivisionLevel);
	Nan::SetPrototypeMethod(tpl, "getNonlinearSubdivisionLevel", GetNonlinearSubdivisionLevel);

	Nan::SetPrototypeMethod(tpl, "GetOriginalCellIdsName", GetOriginalCellIdsName);
	Nan::SetPrototypeMethod(tpl, "getOriginalCellIdsName", GetOriginalCellIdsName);

	Nan::SetPrototypeMethod(tpl, "GetOriginalPointIdsName", GetOriginalPointIdsName);
	Nan::SetPrototypeMethod(tpl, "getOriginalPointIdsName", GetOriginalPointIdsName);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughCellIds", GetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughCellIds", GetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughPointIds", GetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughPointIds", GetPassThroughPointIds);

	Nan::SetPrototypeMethod(tpl, "GetPieceInvariant", GetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "getPieceInvariant", GetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "GetUseStrips", GetUseStrips);
	Nan::SetPrototypeMethod(tpl, "getUseStrips", GetUseStrips);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOff", PassThroughCellIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOff", PassThroughCellIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOn", PassThroughCellIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOn", PassThroughCellIdsOn);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOff", PassThroughPointIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOff", PassThroughPointIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOn", PassThroughPointIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOn", PassThroughPointIdsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNonlinearSubdivisionLevel", SetNonlinearSubdivisionLevel);
	Nan::SetPrototypeMethod(tpl, "setNonlinearSubdivisionLevel", SetNonlinearSubdivisionLevel);

	Nan::SetPrototypeMethod(tpl, "SetOriginalCellIdsName", SetOriginalCellIdsName);
	Nan::SetPrototypeMethod(tpl, "setOriginalCellIdsName", SetOriginalCellIdsName);

	Nan::SetPrototypeMethod(tpl, "SetOriginalPointIdsName", SetOriginalPointIdsName);
	Nan::SetPrototypeMethod(tpl, "setOriginalPointIdsName", SetOriginalPointIdsName);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughCellIds", SetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughCellIds", SetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughPointIds", SetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughPointIds", SetPassThroughPointIds);

	Nan::SetPrototypeMethod(tpl, "SetPieceInvariant", SetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "setPieceInvariant", SetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "SetUseStrips", SetUseStrips);
	Nan::SetPrototypeMethod(tpl, "setUseStrips", SetUseStrips);

	Nan::SetPrototypeMethod(tpl, "UnstructuredGridExecute", UnstructuredGridExecute);
	Nan::SetPrototypeMethod(tpl, "unstructuredGridExecute", UnstructuredGridExecute);

	Nan::SetPrototypeMethod(tpl, "UseStripsOff", UseStripsOff);
	Nan::SetPrototypeMethod(tpl, "useStripsOff", UseStripsOff);

	Nan::SetPrototypeMethod(tpl, "UseStripsOn", UseStripsOn);
	Nan::SetPrototypeMethod(tpl, "useStripsOn", UseStripsOn);

#ifdef VTK_NODE_PLUS_VTKDATASETSURFACEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDATASETSURFACEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDataSetSurfaceFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetSurfaceFilter> native = vtkSmartPointer<vtkDataSetSurfaceFilter>::New();
		VtkDataSetSurfaceFilterWrap* obj = new VtkDataSetSurfaceFilterWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataSetSurfaceFilterWrap::DataSetExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->DataSetExecute(
				(vtkDataSet *) a0->native.GetPointer(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetSurfaceFilterWrap::GetNonlinearSubdivisionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNonlinearSubdivisionLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetSurfaceFilterWrap::GetOriginalCellIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginalCellIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetSurfaceFilterWrap::GetOriginalPointIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginalPointIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetSurfaceFilterWrap::GetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughCellIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetSurfaceFilterWrap::GetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughPointIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetSurfaceFilterWrap::GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceInvariant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetSurfaceFilterWrap::GetUseStrips(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseStrips();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetSurfaceFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	vtkDataSetSurfaceFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDataSetSurfaceFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetSurfaceFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetSurfaceFilterWrap *w = new VtkDataSetSurfaceFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetSurfaceFilterWrap::PassThroughCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOff();
}

void VtkDataSetSurfaceFilterWrap::PassThroughCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOn();
}

void VtkDataSetSurfaceFilterWrap::PassThroughPointIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOff();
}

void VtkDataSetSurfaceFilterWrap::PassThroughPointIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOn();
}

void VtkDataSetSurfaceFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataSetSurfaceFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDataSetSurfaceFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetSurfaceFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetSurfaceFilterWrap *w = new VtkDataSetSurfaceFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetNonlinearSubdivisionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNonlinearSubdivisionLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetOriginalCellIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOriginalCellIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetOriginalPointIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOriginalPointIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughCellIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughPointIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPieceInvariant(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::SetUseStrips(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseStrips(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::UnstructuredGridExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->UnstructuredGridExecute(
				(vtkDataSet *) a0->native.GetPointer(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetSurfaceFilterWrap::UseStripsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseStripsOff();
}

void VtkDataSetSurfaceFilterWrap::UseStripsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetSurfaceFilterWrap>(info.Holder());
	vtkDataSetSurfaceFilter *native = (vtkDataSetSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseStripsOn();
}

