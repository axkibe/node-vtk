/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCompositeDataSetWrap.h"
#include "vtkUniformGridAMRWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkCompositeDataIteratorWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkUniformGridWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUniformGridAMRWrap::ptpl;

VtkUniformGridAMRWrap::VtkUniformGridAMRWrap()
{ }

VtkUniformGridAMRWrap::VtkUniformGridAMRWrap(vtkSmartPointer<vtkUniformGridAMR> _native)
{ native = _native; }

VtkUniformGridAMRWrap::~VtkUniformGridAMRWrap()
{ }

void VtkUniformGridAMRWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUniformGridAMR").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UniformGridAMR").ToLocalChecked(), ConstructorGetter);
}

void VtkUniformGridAMRWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUniformGridAMRWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositeDataSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositeDataSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUniformGridAMRWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetCompositeIndex", GetCompositeIndex);
	Nan::SetPrototypeMethod(tpl, "getCompositeIndex", GetCompositeIndex);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetGridDescription", GetGridDescription);
	Nan::SetPrototypeMethod(tpl, "getGridDescription", GetGridDescription);

	Nan::SetPrototypeMethod(tpl, "GetMax", GetMax);
	Nan::SetPrototypeMethod(tpl, "getMax", GetMax);

	Nan::SetPrototypeMethod(tpl, "GetMin", GetMin);
	Nan::SetPrototypeMethod(tpl, "getMin", GetMin);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDataSets", GetNumberOfDataSets);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDataSets", GetNumberOfDataSets);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevels", GetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevels", GetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "GetTotalNumberOfBlocks", GetTotalNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "getTotalNumberOfBlocks", GetTotalNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewIterator", NewIterator);
	Nan::SetPrototypeMethod(tpl, "newIterator", NewIterator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataSet", SetDataSet);
	Nan::SetPrototypeMethod(tpl, "setDataSet", SetDataSet);

	Nan::SetPrototypeMethod(tpl, "SetGridDescription", SetGridDescription);
	Nan::SetPrototypeMethod(tpl, "setGridDescription", SetGridDescription);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

#ifdef VTK_NODE_PLUS_VTKUNIFORMGRIDAMRWRAP_INITPTPL
	VTK_NODE_PLUS_VTKUNIFORMGRIDAMRWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkUniformGridAMRWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUniformGridAMR> native = vtkSmartPointer<vtkUniformGridAMR>::New();
		VtkUniformGridAMRWrap* obj = new VtkUniformGridAMRWrap(native);
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

void VtkUniformGridAMRWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataSetWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkCompositeDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetCompositeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetCompositeIndex(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkUniformGridAMR * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkUniformGridAMRWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkUniformGridAMRWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkUniformGridAMRWrap *w = new VtkUniformGridAMRWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkUniformGridAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkUniformGridAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUniformGridAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformGridAMRWrap *w = new VtkUniformGridAMRWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridAMRWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataSet(
			(vtkCompositeDataIterator *) a0->native.GetPointer()
		);
		VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			vtkUniformGrid * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetDataSet(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			VtkUniformGridWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkUniformGridWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkUniformGridWrap *w = new VtkUniformGridWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridDescription();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridAMRWrap::GetMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMax(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMax(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMin(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetNumberOfDataSets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		unsigned int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfDataSets(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridAMRWrap::GetTotalNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTotalNumberOfBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridAMRWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkUniformGridAMRWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	vtkUniformGridAMR * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkUniformGridAMRWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUniformGridAMRWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUniformGridAMRWrap *w = new VtkUniformGridAMRWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUniformGridAMRWrap::NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	vtkCompositeDataIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewIterator();
	VtkCompositeDataIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUniformGridAMRWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkUniformGridAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkUniformGridAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUniformGridAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformGridAMRWrap *w = new VtkUniformGridAMRWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDataSet(
				(vtkCompositeDataIterator *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkUniformGridWrap::ptpl))->HasInstance(info[2]))
			{
				VtkUniformGridWrap *a2 = ObjectWrap::Unwrap<VtkUniformGridWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDataSet(
					info[0]->Uint32Value(),
					info[1]->Uint32Value(),
					(vtkUniformGrid *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::SetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridDescription(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridAMRWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridAMRWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridAMRWrap>(info.Holder());
	vtkUniformGridAMR *native = (vtkUniformGridAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
